//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface BDWalletConstraintLabel : UILabel
{
    NSString *_bText;
    NSString *_bColor;
    NSString *_bTextColor;
    NSString *_bSize;
    NSString *_bAdapterSize;
    NSString *_bFontSize;
    NSString *_bPointSize;
}

+ (id)initWithDictionary:(id)arg1;
+ (void)load;
@property(retain, nonatomic) NSString *bPointSize; // @synthesize bPointSize=_bPointSize;
@property(retain, nonatomic) NSString *bFontSize; // @synthesize bFontSize=_bFontSize;
@property(retain, nonatomic) NSString *bAdapterSize; // @synthesize bAdapterSize=_bAdapterSize;
@property(retain, nonatomic) NSString *bSize; // @synthesize bSize=_bSize;
@property(retain, nonatomic) NSString *bTextColor; // @synthesize bTextColor=_bTextColor;
@property(retain, nonatomic) NSString *bColor; // @synthesize bColor=_bColor;
@property(retain, nonatomic) NSString *bText; // @synthesize bText=_bText;
- (void).cxx_destruct;
- (void)customAttributeText:(long long)arg1 endPos:(long long)arg2 color:(id)arg3;
- (void)dicToProperty:(id)arg1;
- (id)init;

@end

