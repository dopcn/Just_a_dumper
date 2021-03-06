//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDataDetector, NSMutableCharacterSet, NSString;

@interface Tokenizer : NSObject
{
    NSArray *_stopWords;
    NSMutableCharacterSet *_punctuation;
    NSDataDetector *_detector;
    NSString *_content;
}

+ (id)language:(id)arg1;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)tokenize;
- (_Bool)isNumberic:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

