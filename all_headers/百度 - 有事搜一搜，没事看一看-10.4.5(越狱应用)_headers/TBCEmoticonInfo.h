//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBCEmoticonInfo : NSObject
{
    float _width;
    float _height;
    NSString *_staticPath;
    NSString *_dynamicPath;
    NSString *_emotionTitle;
    NSString *_emotionPackId;
    NSString *_emotionPackName;
}

@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *emotionPackName; // @synthesize emotionPackName=_emotionPackName;
@property(retain, nonatomic) NSString *emotionPackId; // @synthesize emotionPackId=_emotionPackId;
@property(retain, nonatomic) NSString *emotionTitle; // @synthesize emotionTitle=_emotionTitle;
@property(retain, nonatomic) NSString *dynamicPath; // @synthesize dynamicPath=_dynamicPath;
@property(retain, nonatomic) NSString *staticPath; // @synthesize staticPath=_staticPath;
- (void)dealloc;

@end

