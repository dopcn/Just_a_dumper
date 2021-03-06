//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IYWZipProtocol <NSObject>
- (_Bool)unzipCloseFile;
- (_Bool)unzipFileTo:(NSString *)arg1 overWrite:(_Bool)arg2;
- (_Bool)unzipOpenFile:(NSString *)arg1 password:(NSString *)arg2;
- (_Bool)closeZipFile;
- (_Bool)addDirectoryToZip:(NSString *)arg1 newDirectory:(NSString *)arg2;
- (_Bool)addFileToZip:(NSString *)arg1 newName:(NSString *)arg2;
- (_Bool)createZipFile:(NSString *)arg1 password:(NSString *)arg2 append:(_Bool)arg3;
@end

