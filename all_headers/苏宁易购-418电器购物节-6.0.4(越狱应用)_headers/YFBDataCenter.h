//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CloudDiamondDto, NSString;

@interface YFBDataCenter : NSObject
{
    _Bool _isTrustLogin;
    _Bool _currentIfComeInHomepage;
    NSString *_yiGouCustNo;
    NSString *_ifQRCodebillbackyiGou;
    NSString *_thirdChannelTypeNS;
    NSString *_thirdUserAgentNS;
    CloudDiamondDto *_cloudDiamondDto;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CloudDiamondDto *cloudDiamondDto; // @synthesize cloudDiamondDto=_cloudDiamondDto;
@property(nonatomic) _Bool currentIfComeInHomepage; // @synthesize currentIfComeInHomepage=_currentIfComeInHomepage;
@property(retain, nonatomic) NSString *thirdUserAgentNS; // @synthesize thirdUserAgentNS=_thirdUserAgentNS;
@property(retain, nonatomic) NSString *thirdChannelTypeNS; // @synthesize thirdChannelTypeNS=_thirdChannelTypeNS;
@property(retain, nonatomic) NSString *ifQRCodebillbackyiGou; // @synthesize ifQRCodebillbackyiGou=_ifQRCodebillbackyiGou;
@property(retain, nonatomic) NSString *yiGouCustNo; // @synthesize yiGouCustNo=_yiGouCustNo;
@property(nonatomic) _Bool isTrustLogin; // @synthesize isTrustLogin=_isTrustLogin;
- (void).cxx_destruct;
- (id)getIdCardType;
- (id)getIdCardName;

@end

