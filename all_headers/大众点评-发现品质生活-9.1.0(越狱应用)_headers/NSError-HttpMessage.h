//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (HttpMessage)
+ (id)errorWithTask:(id)arg1 error:(id)arg2;
+ (id)errorWithSimpleMessage:(id)arg1;
+ (id)nv_flagKey;
+ (id)nv_statusCodeKey;
+ (id)nv_clientDataKey;
+ (id)nv_clientMessageKey;
+ (id)nv_clientTitleKey;
@property(readonly, nonatomic) long long nv_flag;
@property(readonly, nonatomic) long long nv_statusCode;
@property(readonly, copy, nonatomic) NSString *nv_data;
@property(readonly, copy, nonatomic) NSString *nv_message;
@property(readonly, copy, nonatomic) NSString *nv_title;
@end

