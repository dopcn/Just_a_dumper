//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FontOnlineInfo, FontTextLabelInfo, NSString, TTextFont, UIColor;

@protocol FontTextDelegate <NSObject>
- (void)moreBgButtonClicked;
- (void)needDownLoad:(FontOnlineInfo *)arg1;
- (void)hiddenShowLabeltabmain;
- (void)ChangedLineSpacing:(double)arg1;
- (void)ChangedLetterSpacing:(double)arg1;
- (void)ChangedText:(NSString *)arg1;
- (void)ChangedTextFont:(TTextFont *)arg1;
- (void)ChangedTextBg:(FontOnlineInfo *)arg1;
- (void)ChangedTextTexture:(FontTextLabelInfo *)arg1;
- (void)ChangedStyleChanged:(FontTextLabelInfo *)arg1;
- (void)ChangedGuass:(_Bool)arg1;
- (void)ChangedAlpha:(double)arg1;
- (void)ChangedShadowSize:(double)arg1;
- (void)ChangedShadowColor:(UIColor *)arg1;
- (void)ChangedStrokeColor:(UIColor *)arg1;
- (void)ChangedStrokeSize:(double)arg1;
@end

