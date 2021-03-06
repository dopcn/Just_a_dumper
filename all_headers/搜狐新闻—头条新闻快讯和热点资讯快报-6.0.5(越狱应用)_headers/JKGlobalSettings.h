//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JKZipArchiveDelegate-Protocol.h"

@class NSString;
@protocol JKAuthDelegate, JKZipArchiveDelegate;

@interface JKGlobalSettings : NSObject <JKZipArchiveDelegate>
{
    _Bool _debugMode;
    CDUnknownBlockType _logger;
    unsigned long long _imageLoadMode;
    NSString *_webAppResourcePath;
    id <JKZipArchiveDelegate> _zipArchiveDelegate;
    id <JKAuthDelegate> _authDelegate;
}

+ (id)defaultSettings;
@property(retain, nonatomic) id <JKAuthDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
@property(retain, nonatomic) id <JKZipArchiveDelegate> zipArchiveDelegate; // @synthesize zipArchiveDelegate=_zipArchiveDelegate;
@property(retain, nonatomic) NSString *webAppResourcePath; // @synthesize webAppResourcePath=_webAppResourcePath;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) unsigned long long imageLoadMode; // @synthesize imageLoadMode=_imageLoadMode;
@property(copy, nonatomic) CDUnknownBlockType logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

