//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSOPDFPage;

@interface KSOPDFCoordinateService : NSObject
{
    unsigned long long _rotation;
    KSOPDFPage *_page;
    struct CGSize _displayViewSize;
    struct CGRect _displayViewClipRect;
}

@property(nonatomic) __weak KSOPDFPage *page; // @synthesize page=_page;
@property(nonatomic) struct CGRect displayViewClipRect; // @synthesize displayViewClipRect=_displayViewClipRect;
@property(nonatomic) struct CGSize displayViewSize; // @synthesize displayViewSize=_displayViewSize;
@property(nonatomic) unsigned long long rotation; // @synthesize rotation=_rotation;
- (void).cxx_destruct;
- (struct CGAffineTransform)pageToViewTransform;
- (struct CGAffineTransform)viewToPageTransform;
- (double)pageLengthToViewLength:(double)arg1;
- (double)viewLengthToPageLength:(double)arg1;
- (id)pagePathToViewPath:(id)arg1;
- (id)viewPathToPagePath:(id)arg1;
- (struct CGRect)pageRectToViewRect:(struct CGRect)arg1;
- (struct CGRect)viewRectToPageRect:(struct CGRect)arg1;
- (struct CGPoint)pagePointToViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointToPagePoint:(struct CGPoint)arg1;
- (void)updateWithDisplayViewSize:(struct CGSize)arg1 page:(id)arg2 rotation:(unsigned long long)arg3;
- (id)initWithDisplayViewSize:(struct CGSize)arg1 page:(id)arg2 rotation:(unsigned long long)arg3;

@end

