//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CTTrainLabelComponent : NSObject
{
    long long position;
    long long componentIndex;
    NSString *_text;
    NSString *_tagLabel;
    NSMutableDictionary *_attributes;
}

+ (id)componentWithTag:(id)arg1 position:(long long)arg2 attributes:(id)arg3;
+ (id)componentWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long componentIndex; // @synthesize componentIndex;
@property(nonatomic) long long position; // @synthesize position;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(id)arg1 position:(long long)arg2 attributes:(id)arg3;
- (id)initWithString:(id)arg1 tag:(id)arg2 attributes:(id)arg3;

@end

