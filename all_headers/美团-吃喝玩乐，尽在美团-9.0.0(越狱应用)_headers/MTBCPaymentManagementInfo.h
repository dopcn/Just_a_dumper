//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class SPKPaymentManagementItemInfo;

@interface MTBCPaymentManagementInfo : SAKDomainObject
{
    SPKPaymentManagementItemInfo *_wxNoPasswordPayItem;
}

+ (id)wxNoPasswordPayItemJSONTransformer;
+ (id)predicateDictionary;
@property(retain, nonatomic) SPKPaymentManagementItemInfo *wxNoPasswordPayItem; // @synthesize wxNoPasswordPayItem=_wxNoPasswordPayItem;
- (void).cxx_destruct;

@end

