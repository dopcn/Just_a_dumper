//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class JDPRealNameSendMessageDisPlayDataModel, NSString;

@interface JDPRealNameSendMessageReturnModel : CBPaymentBaseReturnModel
{
    JDPRealNameSendMessageDisPlayDataModel *_disPlayDataModel;
    NSString *_signResult;
}

@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(retain, nonatomic) JDPRealNameSendMessageDisPlayDataModel *disPlayDataModel; // @synthesize disPlayDataModel=_disPlayDataModel;
- (void).cxx_destruct;

@end

