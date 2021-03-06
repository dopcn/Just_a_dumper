//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MttWebHTMLElement : NSObject
{
    int type_;
    NSString *title_;
    NSString *href_;
    NSString *imgSrc_;
    NSData *imgData_;
    NSString *_imgExtension;
}

+ (id)elementForUIWebView:(id)arg1 atPoint:(struct CGPoint)arg2;
+ (void)elementForWKWebView:(id)arg1 atPoint:(struct CGPoint)arg2 complteBlock:(CDUnknownBlockType)arg3;
+ (id)elementType:(unsigned long long)arg1 forElementLevel:(unsigned long long)arg2;
+ (id)imgDataFromURLString:(id)arg1;
@property(copy, nonatomic) NSString *imgExtension; // @synthesize imgExtension=_imgExtension;
@property(copy, nonatomic) NSData *imgData; // @synthesize imgData=imgData_;
@property(copy, nonatomic) NSString *imgSrc; // @synthesize imgSrc=imgSrc_;
@property(copy, nonatomic) NSString *href; // @synthesize href=href_;
@property(copy, nonatomic) NSString *title; // @synthesize title=title_;
@property(nonatomic) int type; // @synthesize type=type_;
- (void).cxx_destruct;
- (id)getTitleWithoutHTML;
- (id)description;

@end

