//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMLWBaseModel.h"

@class NSString, UIColor;

@interface BMLWOrderStatusModel : BMLWBaseModel
{
    long long _value;
    NSString *_text;
    UIColor *_orderListTextColor;
}

+ (id)statusTextForStatusValue:(long long)arg1;
+ (id)statusValueToStatusTextMapper;
@property(retain, nonatomic) UIColor *orderListTextColor; // @synthesize orderListTextColor=_orderListTextColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)setValueWithJSONObject:(id)arg1;

@end

