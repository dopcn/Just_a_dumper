//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TuneAnalyticsItem : NSObject
{
    NSString *_item;
    NSString *_unitPrice;
    NSString *_quantity;
    NSString *_revenue;
    NSArray *_attributes;
}

+ (id)analyticsItemFromTuneEventItem:(id)arg1;
@property(copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *revenue; // @synthesize revenue=_revenue;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(copy, nonatomic) NSString *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithTuneEventItem:(id)arg1;

@end

