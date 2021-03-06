//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "KSOPDFPageRenderDelegate-Protocol.h"

@class KSOPDFPageRenderOptions, NSString, UIImageView;

@interface KWPDFExtractPreviewCell : UICollectionViewCell <KSOPDFPageRenderDelegate>
{
    long long _pageIndex;
    UIImageView *_imageView;
    KSOPDFPageRenderOptions *_renderOptions;
}

@property(retain, nonatomic) KSOPDFPageRenderOptions *renderOptions; // @synthesize renderOptions=_renderOptions;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pageRender:(id)arg1 state:(long long)arg2 image:(id)arg3;
- (void)refreshContent:(id)arg1 pageIndex:(unsigned long long)arg2;
- (id)renderOptions:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

