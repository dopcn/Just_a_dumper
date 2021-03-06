//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface BitmapContext : NSObject
{
    int m_pageIndex;
    struct CGRect m_pageRect;
    UIImage *m_bitImage;
    float m_scale;
    struct CGRect m_inRect;
    _Bool _isShareMode;
    struct CGRect _shareRect;
}

@property(nonatomic) _Bool isShareMode; // @synthesize isShareMode=_isShareMode;
@property(nonatomic) struct CGRect shareRect; // @synthesize shareRect=_shareRect;
@property(nonatomic) struct CGRect inRect; // @synthesize inRect=m_inRect;
@property(nonatomic) float scale; // @synthesize scale=m_scale;
@property(retain, nonatomic) UIImage *bitImage; // @synthesize bitImage=m_bitImage;
@property(nonatomic) struct CGRect pageRect; // @synthesize pageRect=m_pageRect;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=m_pageIndex;
- (void)dealloc;
- (void)drawTableImageInBitmap:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawInBitmap:(int)arg1 inRect:(struct CGRect)arg2;
- (void)drawTile:(int)arg1 inRect:(struct CGRect)arg2 withTileTag:(int)arg3;
- (struct CGContext *)CreateBitmapContext:(int)arg1 pixelsHigh:(int)arg2;

@end

