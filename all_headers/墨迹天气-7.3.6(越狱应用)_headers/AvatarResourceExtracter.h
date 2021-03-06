//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ZipArchive;

@interface AvatarResourceExtracter : NSObject
{
    ZipArchive *_zipArchive;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ZipArchive *zipArchive; // @synthesize zipArchive=_zipArchive;
- (void).cxx_destruct;
- (void)unzipFromPath:(id)arg1 toPath:(id)arg2 withFinishedBlock:(CDUnknownBlockType)arg3;
- (void)unzipAvatarResourcesByAvatarId:(id)arg1 withFinishedBlock:(CDUnknownBlockType)arg2;
- (void)p_unzipFileAtPath:(id)arg1 toPath:(id)arg2 withFinishedBlock:(CDUnknownBlockType)arg3;

@end

