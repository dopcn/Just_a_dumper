//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDWTRequest.h"

@class NSString;

@interface BDWTFindPasswordCheckVcodeRequest : BDWTRequest
{
    NSString *_card_no;
    NSString *_sms_vcode;
}

@property(retain, nonatomic) NSString *sms_vcode; // @synthesize sms_vcode=_sms_vcode;
@property(retain, nonatomic) NSString *card_no; // @synthesize card_no=_card_no;
- (void).cxx_destruct;
- (void)loadContractParamters;
- (id)requestBaseURL;

@end

