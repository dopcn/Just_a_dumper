//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NewOrderGoodsModel : NSObject
{
    NSString *productid;
    NSString *name;
    NSString *img;
    NSString *price;
    NSString *costPrice;
    NSString *count;
    NSString *property;
    NSString *statusname;
    NSString *status;
    NSString *over;
    NSString *returnid;
    NSString *cost_price;
}

@property(retain, nonatomic) NSString *cost_price; // @synthesize cost_price;
@property(retain, nonatomic) NSString *returnid; // @synthesize returnid;
@property(retain, nonatomic) NSString *over; // @synthesize over;
@property(retain, nonatomic) NSString *status; // @synthesize status;
@property(retain, nonatomic) NSString *statusname; // @synthesize statusname;
@property(retain, nonatomic) NSString *property; // @synthesize property;
@property(retain, nonatomic) NSString *count; // @synthesize count;
@property(retain, nonatomic) NSString *costPrice; // @synthesize costPrice;
@property(retain, nonatomic) NSString *price; // @synthesize price;
@property(retain, nonatomic) NSString *img; // @synthesize img;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *productid; // @synthesize productid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

