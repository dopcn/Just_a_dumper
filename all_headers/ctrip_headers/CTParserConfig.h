//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CTParserConfig : NSObject
{
    NSMutableDictionary *_parserDic;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)getDeserializerWithFieldAnnotation:(id)arg1 parserKey:(id)arg2;
- (id)getParser:(id)arg1;
- (void)initParserDic;
- (id)init;

@end

