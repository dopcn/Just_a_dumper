//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIConfiguration.h"

@interface VSEasyAPIVpalConfiguration : VSEasyAPIConfiguration
{
    CDUnknownBlockType _originRequestConfigurator;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType originRequestConfigurator; // @synthesize originRequestConfigurator=_originRequestConfigurator;
- (void).cxx_destruct;
- (void)callFailure:(CDUnknownBlockType)arg1 onMainThreadWithDataTask:(id)arg2 error:(id)arg3;
- (void)callSuccess:(CDUnknownBlockType)arg1 onMainThreadWithDataTask:(id)arg2 responseData:(id)arg3;
- (void)handleResponseObject:(id)arg1 forDataTask:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;
- (void)addHTTPHeader:(id)arg1;

@end

