//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CModelLoader.h"

@class NSString;

@interface CIndexModelLoader : CModelLoader
{
    NSString *_childChannelName;
}

+ (id)parseContent:(id)arg1 withParams:(id)arg2;
@property(copy, nonatomic) NSString *childChannelName; // @synthesize childChannelName=_childChannelName;
- (void).cxx_destruct;
- (void)modelFail;
- (void)modelSuccess;
- (void)modelStart;
- (void)writeDataToDisk:(id)arg1;
- (_Bool)checkCacheExist:(id)arg1;
- (void)loadDataFromDisk:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)createLoadUrl:(id)arg1;
- (id)parseContent:(id)arg1 params:(id)arg2;
- (id)init;

@end

