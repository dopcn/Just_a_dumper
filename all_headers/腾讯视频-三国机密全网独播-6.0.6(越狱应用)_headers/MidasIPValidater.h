//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MidasIPValidater : NSObject
{
}

+ (_Bool)isIPValidated:(id)arg1;
+ (id)_prepareForRequest:(id)arg1 domain:(id)arg2;
+ (void)_domainSpeedTesting:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_speedTesting:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)startSpeedTest:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

