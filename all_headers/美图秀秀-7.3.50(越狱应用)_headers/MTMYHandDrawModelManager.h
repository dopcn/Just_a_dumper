//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MTMYHandDrawModelManager : NSObject
{
    _Bool _shouldUpdate;
    NSURL *_modelURL;
    NSString *_modelMD5;
}

+ (id)sharedManager;
@property(nonatomic) _Bool shouldUpdate; // @synthesize shouldUpdate=_shouldUpdate;
@property(copy, nonatomic) NSString *modelMD5; // @synthesize modelMD5=_modelMD5;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void).cxx_destruct;
- (void)downloadMaterialPackage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 retryCount:(long long)arg3;
- (void)downloadMaterialPackage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)downloadModelForURL:(id)arg1 withRetryCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadModelForURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateModelIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)initPrivate;
- (id)init;

@end

