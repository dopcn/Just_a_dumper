//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface CCB_O_Q70021 : CCBBaseModel
{
    NSDictionary *_param_security;
    NSDictionary *_pversion;
    NSArray *_MBC_ACCOUNT;
    NSDictionary *_setvar_params;
    NSString *_alert_tips;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSString *alert_tips; // @synthesize alert_tips=_alert_tips;
@property(retain, nonatomic) NSDictionary *setvar_params; // @synthesize setvar_params=_setvar_params;
@property(retain, nonatomic) NSArray *MBC_ACCOUNT; // @synthesize MBC_ACCOUNT=_MBC_ACCOUNT;
@property(retain, nonatomic) NSDictionary *pversion; // @synthesize pversion=_pversion;
@property(retain, nonatomic) NSDictionary *param_security; // @synthesize param_security=_param_security;
- (void).cxx_destruct;

@end

