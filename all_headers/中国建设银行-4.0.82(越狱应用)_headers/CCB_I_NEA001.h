//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseRequestModel.h"

@class NSString;

@interface CCB_I_NEA001 : CCBBaseRequestModel
{
    NSString *_APPFLAG;
    NSString *_APPVERSION;
    NSString *_APPPLATFORM;
    NSString *_APP_NAME;
    NSString *_MP_CODE;
    NSString *_SEC_VERSION;
    NSString *_SYS_CODE;
    NSString *_reqTime;
    NSString *_Cst_ID;
    NSString *_Crdt_TpCd;
    NSString *_Crdt_No;
    NSString *_Cst_Nm;
}

+ (id)NEA001FormatWithTime:(id)arg1;
@property(copy, nonatomic) NSString *Cst_Nm; // @synthesize Cst_Nm=_Cst_Nm;
@property(copy, nonatomic) NSString *Crdt_No; // @synthesize Crdt_No=_Crdt_No;
@property(copy, nonatomic) NSString *Crdt_TpCd; // @synthesize Crdt_TpCd=_Crdt_TpCd;
@property(copy, nonatomic) NSString *Cst_ID; // @synthesize Cst_ID=_Cst_ID;
@property(copy, nonatomic) NSString *reqTime; // @synthesize reqTime=_reqTime;
@property(copy, nonatomic) NSString *SYS_CODE; // @synthesize SYS_CODE=_SYS_CODE;
@property(copy, nonatomic) NSString *SEC_VERSION; // @synthesize SEC_VERSION=_SEC_VERSION;
@property(copy, nonatomic) NSString *MP_CODE; // @synthesize MP_CODE=_MP_CODE;
@property(copy, nonatomic) NSString *APP_NAME; // @synthesize APP_NAME=_APP_NAME;
@property(copy, nonatomic) NSString *APPPLATFORM; // @synthesize APPPLATFORM=_APPPLATFORM;
@property(copy, nonatomic) NSString *APPVERSION; // @synthesize APPVERSION=_APPVERSION;
@property(copy, nonatomic) NSString *APPFLAG; // @synthesize APPFLAG=_APPFLAG;
- (void).cxx_destruct;

@end

