//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager, NSMutableArray, NSString;

@interface LocalResourcesManager : NSObject
{
    NSFileManager *_fm;
    NSString *_documentsPath;
    NSMutableArray *_resources;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLocalResourcesManager;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSString *documentsPath; // @synthesize documentsPath=_documentsPath;
@property(retain, nonatomic) NSFileManager *fm; // @synthesize fm=_fm;
- (void).cxx_destruct;
- (void)clear;
- (void)filter:(id)arg1 fileNames:(id)arg2;
- (void)requestLocalResourcesSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

