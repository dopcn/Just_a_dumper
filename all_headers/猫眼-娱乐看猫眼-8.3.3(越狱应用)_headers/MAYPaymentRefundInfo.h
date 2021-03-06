//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface MAYPaymentRefundInfo : MTLModel <MTLJSONSerializing>
{
    _Bool _display;
    _Bool _refundable;
    NSString *_desc;
    NSString *_notice;
    NSString *_note;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool refundable; // @synthesize refundable=_refundable;
@property(nonatomic) _Bool display; // @synthesize display=_display;
- (void).cxx_destruct;

@end

