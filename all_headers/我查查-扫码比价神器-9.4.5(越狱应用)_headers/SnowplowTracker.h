//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SnowplowRequest;

@interface SnowplowTracker : NSObject
{
    unsigned char _base64Encoded;
    NSMutableDictionary *_standardData;
    SnowplowRequest *collector;
    NSString *appId;
    NSString *trackerNamespace;
    NSString *userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId;
@property(retain) NSString *trackerNamespace; // @synthesize trackerNamespace;
@property(retain) NSString *appId; // @synthesize appId;
@property(retain) SnowplowRequest *collector; // @synthesize collector;
- (void).cxx_destruct;
- (void)trackADbanner:(id)arg1 adpo:(id)arg2 adfunc:(id)arg3 context:(id)arg4 timestamp:(double)arg5;
- (void)trackScreenView:(id)arg1 id:(id)arg2 context:(id)arg3 timestamp:(double)arg4;
- (void)trackScreenView:(id)arg1 id:(id)arg2 timestamp:(double)arg3;
- (void)trackScreenView:(id)arg1 id:(id)arg2 context:(id)arg3;
- (void)trackScreenView:(id)arg1 id:(id)arg2;
- (void)trackEcommerceTransaction:(id)arg1 totalValue:(float)arg2 affiliation:(id)arg3 taxValue:(float)arg4 shipping:(float)arg5 city:(id)arg6 state:(id)arg7 country:(id)arg8 currency:(id)arg9 items:(id)arg10 context:(id)arg11 timestamp:(double)arg12;
- (void)trackEcommerceTransaction:(id)arg1 totalValue:(float)arg2 affiliation:(id)arg3 taxValue:(float)arg4 shipping:(float)arg5 city:(id)arg6 state:(id)arg7 country:(id)arg8 currency:(id)arg9 items:(id)arg10 timestamp:(double)arg11;
- (void)trackEcommerceTransaction:(id)arg1 totalValue:(float)arg2 affiliation:(id)arg3 taxValue:(float)arg4 shipping:(float)arg5 city:(id)arg6 state:(id)arg7 country:(id)arg8 currency:(id)arg9 items:(id)arg10 context:(id)arg11;
- (void)trackEcommerceTransaction:(id)arg1 totalValue:(float)arg2 affiliation:(id)arg3 taxValue:(float)arg4 shipping:(float)arg5 city:(id)arg6 state:(id)arg7 country:(id)arg8 currency:(id)arg9 items:(id)arg10;
- (id)trackEcommerceTransactionItem:(id)arg1 sku:(id)arg2 name:(id)arg3 category:(id)arg4 price:(float)arg5 quantity:(int)arg6 currency:(id)arg7 context:(id)arg8 timestamp:(double)arg9;
- (id)trackEcommerceTransactionItem:(id)arg1 sku:(id)arg2 name:(id)arg3 category:(id)arg4 price:(float)arg5 quantity:(int)arg6 currency:(id)arg7 timestamp:(double)arg8;
- (id)trackEcommerceTransactionItem:(id)arg1 sku:(id)arg2 name:(id)arg3 category:(id)arg4 price:(float)arg5 quantity:(int)arg6 currency:(id)arg7 context:(id)arg8;
- (id)trackEcommerceTransactionItem:(id)arg1 sku:(id)arg2 name:(id)arg3 category:(id)arg4 price:(float)arg5 quantity:(int)arg6 currency:(id)arg7;
- (void)trackDeviceInfoEvent:(id)arg1;
- (void)trackUnstructuredEvent:(id)arg1 context:(id)arg2 timestamp:(double)arg3;
- (void)trackUnstructuredEvent:(id)arg1 timestamp:(double)arg2;
- (void)trackUnstructuredEvent:(id)arg1 context:(id)arg2;
- (void)trackUnstructuredEvent:(id)arg1;
- (void)trackStructuredEvent:(id)arg1 action:(id)arg2 label:(id)arg3 property:(id)arg4 value:(float)arg5 context:(id)arg6 timestamp:(double)arg7;
- (void)trackStructuredEvent:(id)arg1 action:(id)arg2 label:(id)arg3 property:(id)arg4 value:(float)arg5 timestamp:(double)arg6;
- (void)trackStructuredEvent:(id)arg1 action:(id)arg2 label:(id)arg3 property:(id)arg4 value:(float)arg5 context:(id)arg6;
- (void)trackStructuredEvent:(id)arg1 action:(id)arg2 label:(id)arg3 property:(id)arg4 value:(float)arg5;
- (void)trackPageView:(id)arg1 title:(id)arg2 referrer:(id)arg3 context:(id)arg4 timestamp:(double)arg5;
- (void)trackPageView:(id)arg1 title:(id)arg2 referrer:(id)arg3 timestamp:(double)arg4;
- (void)trackPageView:(id)arg1 title:(id)arg2 referrer:(id)arg3 context:(id)arg4;
- (void)trackPageView:(id)arg1 title:(id)arg2 referrer:(id)arg3;
- (void)addTracker:(id)arg1;
- (double)setTimestamp:(double)arg1 toPayload:(id)arg2;
- (void)addStandardValuesToPayload_ForDeviceInfo:(id)arg1;
- (void)addStandardValuesToPayload:(id)arg1;
- (void)setMobileContext:(id)arg1;
- (void)setContext:(id)arg1 context:(id)arg2;
- (void)setSchemaTag:(id)arg1;
- (id)initWithCollector:(id)arg1 appId:(id)arg2 base64Encoded:(unsigned char)arg3 namespace:(id)arg4;
- (id)init;

@end

