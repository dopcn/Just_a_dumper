//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSDictionary, NSNumber, NSString;

@interface JDPluginModel : JDModel
{
    NSString *_name;
    NSString *_value;
    NSString *_selector;
    NSString *_action;
    NSDictionary *_configParams;
    NSDictionary *_params;
    NSNumber *_needInit;
    NSNumber *_async;
    NSNumber *_keepalive;
    NSString *_callbackId;
}

@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(retain, nonatomic) NSNumber *keepalive; // @synthesize keepalive=_keepalive;
@property(retain, nonatomic) NSNumber *async; // @synthesize async=_async;
@property(retain, nonatomic) NSNumber *needInit; // @synthesize needInit=_needInit;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSDictionary *configParams; // @synthesize configParams=_configParams;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

