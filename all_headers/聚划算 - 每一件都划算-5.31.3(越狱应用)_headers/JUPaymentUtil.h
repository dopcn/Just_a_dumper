//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JUPaymentUtil : NSObject
{
}

+ (id)dictFromResultPart:(id)arg1;
+ (_Bool)isSuccessOfPaymentString:(id)arg1;
+ (void)payWithSignString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)payWithAlipaySDK:(id)arg1 withBizType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)postPayPageURL;
+ (id)postPayPageURLWithParams:(id)arg1;

@end

