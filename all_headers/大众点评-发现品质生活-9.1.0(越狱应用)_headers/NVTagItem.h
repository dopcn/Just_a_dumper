//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor;

@interface NVTagItem : UIButton
{
    UIColor *_tagbgColor;
    NSString *_categoryID;
    NSString *_buid;
}

+ (struct CGSize)itemSizeWithFont:(id)arg1 Text:(id)arg2;
+ (double)fixedHeight;
@property(copy, nonatomic) NSString *buid; // @synthesize buid=_buid;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) UIColor *tagbgColor; // @synthesize tagbgColor=_tagbgColor;
- (void).cxx_destruct;

@end

