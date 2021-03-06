//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FALiveRTLabelComponent : NSObject
{
    NSString *text;
    NSString *tagLabel;
    NSMutableDictionary *attributes;
    int position;
    int componentIndex;
}

+ (id)componentWithTag:(id)arg1 position:(int)arg2 attributes:(id)arg3;
+ (id)componentWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;
@property(nonatomic) int componentIndex; // @synthesize componentIndex;
@property(nonatomic) int position; // @synthesize position;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes;
@property(copy, nonatomic) NSString *tagLabel; // @synthesize tagLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text;
- (void)dealloc;
- (id)description;
- (id)initWithTag:(id)arg1 position:(int)arg2 attributes:(id)arg3;
- (id)initWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;

@end

