//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QRVIPBookResourceModel : NSObject
{
    long long _resId;
    long long _order;
    NSString *_orderTitle;
    NSString *_title;
    NSArray *_books;
}

+ (id)inventedCardCellModel:(id)arg1;
+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSArray *books; // @synthesize books=_books;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *orderTitle; // @synthesize orderTitle=_orderTitle;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(nonatomic) long long resId; // @synthesize resId=_resId;
- (void).cxx_destruct;

@end

