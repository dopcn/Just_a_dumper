//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKCTStatementInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_ysp;
    NSString *_ysp_1;
    NSString *_ysp_2;
    NSString *_ysp_3;
    NSString *_zwsmb_1;
    NSString *_zwsmb_2;
    NSString *_sfsm_1;
    NSString *_sfsm_2;
    NSString *_sfsm_5;
    NSString *_sfsm_6;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sfsm_6; // @synthesize sfsm_6=_sfsm_6;
@property(copy, nonatomic) NSString *sfsm_5; // @synthesize sfsm_5=_sfsm_5;
@property(copy, nonatomic) NSString *sfsm_2; // @synthesize sfsm_2=_sfsm_2;
@property(copy, nonatomic) NSString *sfsm_1; // @synthesize sfsm_1=_sfsm_1;
@property(copy, nonatomic) NSString *zwsmb_2; // @synthesize zwsmb_2=_zwsmb_2;
@property(copy, nonatomic) NSString *zwsmb_1; // @synthesize zwsmb_1=_zwsmb_1;
@property(copy, nonatomic) NSString *ysp_3; // @synthesize ysp_3=_ysp_3;
@property(copy, nonatomic) NSString *ysp_2; // @synthesize ysp_2=_ysp_2;
@property(copy, nonatomic) NSString *ysp_1; // @synthesize ysp_1=_ysp_1;
@property(copy, nonatomic) NSString *ysp; // @synthesize ysp=_ysp;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultValue;

@end

