//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface YXRandomVideoGameShowCellConfig : NSObject
{
    UIColor *_maskColor;
    UIImage *_bg;
    NSString *_json;
    struct CGSize _size;
}

+ (id)createConfig:(id)arg1 json:(id)arg2 size:(struct CGSize)arg3 mask:(id)arg4;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *json; // @synthesize json=_json;
@property(retain, nonatomic) UIImage *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
- (void).cxx_destruct;

@end

