//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDPromotionItemInfo : NSObject
{
    long long _itemId;
    NSString *_itemPic;
    NSString *_title;
    NSString *_subTitle;
    long long _credit;
    long long _consumerType;
}

+ (id)iteminfoWithResp:(id)arg1;
@property(nonatomic) long long consumerType; // @synthesize consumerType=_consumerType;
@property(nonatomic) long long credit; // @synthesize credit=_credit;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

