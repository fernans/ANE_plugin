@rem generate swf with version 13 (swc project properties : Flex Library Compiler : Additional compiler arguments : -swf-version 13 )
@rem extract the "library.swf" from the swc file

adt -package -target ane AndroidANE.ane descriptor.xml -swc AndroidANESWC.swc -platform Android-ARM AndroidANE.jar library.swf
