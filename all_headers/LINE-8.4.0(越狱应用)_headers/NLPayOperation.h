//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NLPayOperation : NSObject
{
    long long _type;
    NSString *_requestToken;
    NSString *_responseToken;
    NSString *_transactionReservedId;
    NSString *_returnCode;
    NSString *_returnMessage;
    NSDictionary *_auth;
    NSString *_confirmDest;
    NSArray *_targets;
    NSDictionary *_info;
    NSDictionary *_popup;
    NSDictionary *_errorDetailMap;
}

+ (id)showAlertWithOperationInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 useLayerType:(_Bool)arg3;
@property(retain, nonatomic) NSDictionary *errorDetailMap; // @synthesize errorDetailMap=_errorDetailMap;
@property(retain, nonatomic) NSDictionary *popup; // @synthesize popup=_popup;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSString *confirmDest; // @synthesize confirmDest=_confirmDest;
@property(retain, nonatomic) NSDictionary *auth; // @synthesize auth=_auth;
@property(retain, nonatomic) NSString *returnMessage; // @synthesize returnMessage=_returnMessage;
@property(retain, nonatomic) NSString *returnCode; // @synthesize returnCode=_returnCode;
@property(retain, nonatomic) NSString *transactionReservedId; // @synthesize transactionReservedId=_transactionReservedId;
@property(retain, nonatomic) NSString *responseToken; // @synthesize responseToken=_responseToken;
@property(retain, nonatomic) NSString *requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)internalServerErrorCode;
- (id)paymentError;
- (_Bool)isNotManagedError;
- (_Bool)isClientRequestError;
- (_Bool)isSuccess;
- (_Bool)isInternalServerError;
- (_Bool)isEqualToPaymentErrorCode:(long long)arg1;
- (id)initWithJsonString:(id)arg1;

@end

