# ANE_plugin

Practice workshop (2012–2013) for building **Adobe AIR Native Extensions (ANE)** — the mechanism that lets an AIR/ActionScript application call native code. Two independent proof-of-concept projects:

- **`androidane/`** — a minimal ANE for **Android**: native side in Java (Eclipse ADT project, `com.cubensis.ane.androidane`: `AndroidAneExtension` implementing `FREExtension` + context + test function stub), ActionScript wrapper library (`swc/`) and the packaging pipeline (`ane/empaquetar.bat` with `adt -package -target ane`, notes on `-swf-version 13` and extracting `library.swf` from the SWC).
- **`ANEtest/`** — a complete ANE for desktop **Windows-x86**: native C code (`C/ANEtest.c`, Eclipse CDT + Adobe's `FlashRuntimeExtensions.h`) registering `functionA()` (returns `"Hola"`) and `isSupported()`, compiled as `libANEtest.dll`, with its ActionScript wrapper (`com.fernans.ANE.ANEtest`) and both the SWC and the packaged `ANEtest.ane`.

Deliverables are versioned: `androidane/ane/AndroidANE.ane`, `ANEtest/ANE/ANEtest.ane` and the DLLs. Intermediate build artifacts (`jar/bin`, `jar/gen`, `SWF/bin`, `.o`) are excluded.

> **This project is shared ONLY for educational purposes. Its use, direct or derived, for professional or economic purposes is not permitted.**

Note: for security reasons, some parts of the project may have been edited or removed (e.g. personal paths and intermediate build artifacts replaced or excluded).

**Requirements / How to run**

- To build the Android ANE: Android SDK + Eclipse/ADT (open `androidane/jar` and `androidane/swc`), Adobe AIR SDK (`adt`); package with `androidane/ane/empaquetar.bat`.
- To build the Windows ANE: Flash Builder 4.6 / AIR SDK 4.6.0 (for `FlashRuntimeExtensions.lib/.h`), a C compiler (Eclipse CDT) to rebuild `ANEtest.c` → `libANEtest.dll`; package with `ANEtest/ANE/empaquetar.bat`.
- To consume either ANE: add the `.swc` to a Flex/ActionScript project and call it through `flash.external.ExtensionContext`.
- Includes Adobe AIR SDK's third-party header `FlashRuntimeExtensions.h` (copyright Adobe).

DISCLAIMER: This software is provided "as is", without any warranty of any kind. The author accepts no liability for any errors or damages resulting from its use.

**AI training**: the use of the content of this repository (code, assets, documentation) to train or fine-tune machine learning models or AI systems is expressly **not permitted**. All of the repository is licensed under CC-BY-NC-4.0 (see the `LICENSE` file).

---

# ANE_plugin

Taller de práctica (2012–2013) para crear **AIR Native Extensions (ANE) de Adobe** — el mecanismo que permite a una aplicación AIR/ActionScript llamar a código nativo. Dos proyectos de prueba de concepto independientes:

- **`androidane/`** — una ANE mínima para **Android**: lado nativo en Java (proyecto Eclipse ADT, `com.cubensis.ane.androidane`: `AndroidAneExtension` implementando `FREExtension` + contexto + función de test), librería envoltorio en ActionScript (`swc/`) y el pipeline de empaquetado (`ane/empaquetar.bat` con `adt -package -target ane`, notas sobre `-swf-version 13` y cómo extraer `library.swf` del SWC).
- **`ANEtest/`** — una ANE completa para escritorio **Windows-x86**: código nativo en C (`C/ANEtest.c`, Eclipse CDT + el `FlashRuntimeExtensions.h` de Adobe) que registra `functionA()` (devuelve `"Hola"`) y `isSupported()`, compilado como `libANEtest.dll`, con su envoltorio ActionScript (`com.fernans.ANE.ANEtest`) y tanto el SWC como la `ANEtest.ane` ya empaquetada.

Los entregables están versionados: `androidane/ane/AndroidANE.ane`, `ANEtest/ANE/ANEtest.ane` y las DLLs. Los artefactos intermedios de compilación (`jar/bin`, `jar/gen`, `SWF/bin`, `.o`) están excluidos.

> **Este proyecto se comparte SOLO con valor educativo. No está permitido su uso (directo o derivado) para fines profesionales o económicos.**

Nota: por motivos de seguridad, es posible que algunas partes del proyecto se encuentren editadas o eliminadas (p. ej. rutas personales y artefactos intermedios de compilación han sido sustituidos o excluidos).

**Requisitos / Cómo ejecutar**

- Para compilar la ANE Android: Android SDK + Eclipse/ADT (abre `androidane/jar` y `androidane/swc`), Adobe AIR SDK (`adt`); empaqueta con `androidane/ane/empaquetar.bat`.
- Para compilar la ANE Windows: Flash Builder 4.6 / AIR SDK 4.6.0 (para `FlashRuntimeExtensions.lib/.h`), un compilador de C (Eclipse CDT) para regenerar `ANEtest.c` → `libANEtest.dll`; empaqueta con `ANEtest/ANE/empaquetar.bat`.
- Para consumir cualquiera de las ANEs: añade el `.swc` a un proyecto Flex/ActionScript y llámalo a través de `flash.external.ExtensionContext`.
- Incluye el header de terceros `FlashRuntimeExtensions.h` del SDK de Adobe AIR (copyright Adobe).

AVISO: Este software se ofrece "tal cual", sin ningún tipo de garantía. El autor no asume responsabilidad alguna por posibles errores o daños derivados de su uso.

**Entrenamiento de IA**: no se permite expresamente el uso del contenido de este repositorio (código, recursos, documentación) para entrenar o ajustar (*fine-tune*) modelos de aprendizaje automático o sistemas de IA. Todo el repositorio se publica con licencia CC-BY-NC-4.0 (ver el archivo `LICENSE`).
