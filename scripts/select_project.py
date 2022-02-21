import os

apps = None

for root, apps, files in os.walk('./apps'):
    break

print('=======================')
for index, app in enumerate(apps):
    print('  {}.{}'.format(str(index+1), app))
if(len(apps)<0):
    print('no project!')
    exit()
print('Please select project:', end=' ')
project = input()
try:
    project = int(project)
    if(0<project<=len(apps)): 
        app_name = apps[project-1]
        app_path = '/'.join(['.', 'apps',app_name])
        with open('./apps/xmake.lua', 'w') as fp:
            fp.write('add_defines(\"APPS\")\nincludes(\"{}\")' .format(app_name))

        with open('./apps/{}/xmake.lua'.format(app_name), 'w') as fp1:
            for root, components, files in os.walk('./components'):
                break
            for index, component in enumerate(components):
                if os.path.exists('./components/{}/xmake.lua'.format(component)) is False:
                    components.pop(index)


            for index, component in enumerate(components):
                components[index] = '\"{}\"'.format(component)
            components_list = ','.join(components)
            fp1.write('target(\"{}\")\n\tset_kind(\"binary\")\n\tadd_files(\"src/*.cc\")\n\tadd_deps({})\n\tadd_includedirs(\"inc\")'.format(app_name, components_list))

        print('=======================')
        os.system('xmake')

    else:
        print('no project!')
except:
    print('wrong project!')
