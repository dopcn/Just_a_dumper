//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ATQAViewActions-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class ATDrawDataProcesser, NSString, UICollectionView, UILabel;

@interface ATTeachingPageView : UIView <ATQAViewActions, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    struct CGPDFDocument *_pdfDocument;
    UICollectionView *_collectionView;
    UILabel *_pageLabel;
    ATDrawDataProcesser *_dataProcesser;
    NSString *_pdfPath;
    long long _lecturePageCount;
}

@property(nonatomic) long long lecturePageCount; // @synthesize lecturePageCount=_lecturePageCount;
@property(retain, nonatomic) NSString *pdfPath; // @synthesize pdfPath=_pdfPath;
@property(retain, nonatomic) ATDrawDataProcesser *dataProcesser; // @synthesize dataProcesser=_dataProcesser;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)drawSceneViewForPage:(long long)arg1;
- (id)getDrawDataProcesser;
- (void)changePage:(long long)arg1;
- (id)getDrawImages;
- (void)clearDrawFrame;
- (void)didReceiveBaseData:(id)arg1;
- (void)didReceivePoints:(id)arg1;
- (void)scrollToPage:(long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGPDFDocument *)getPdfDocumnt;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updatePageLabel;
- (id)drawViewAtPage:(long long)arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initViews;
- (struct CGRect)getDrawViewFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

