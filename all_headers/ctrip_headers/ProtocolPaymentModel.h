//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ProtocolPaymentModel : CTBusinessBean
{
    _Bool _switchOn;
    _Bool _showComponent;
    _Bool _canPay;
    int _type;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_payTitle;
}

@property(copy, nonatomic) NSString *payTitle; // @synthesize payTitle=_payTitle;
@property(nonatomic) _Bool canPay; // @synthesize canPay=_canPay;
@property(nonatomic) _Bool showComponent; // @synthesize showComponent=_showComponent;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

