//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface MCSCPriceModel : JSONModel
{
    NSString *_type;
    NSString *_date;
    NSString *_begin_date;
    NSString *_date_str;
    NSString *_value;
    NSString *_total;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *total; // @synthesize total=_total;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *date_str; // @synthesize date_str=_date_str;
@property(retain, nonatomic) NSString *begin_date; // @synthesize begin_date=_begin_date;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

