//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YKMediaEditorCropView;

@protocol YKMediaEditorCropViewDelegate <NSObject>
- (struct CGRect)getMaxFrame:(YKMediaEditorCropView *)arg1;
- (struct CGSize)getMinSize:(YKMediaEditorCropView *)arg1;
- (void)cropEnded:(YKMediaEditorCropView *)arg1;
- (void)cropMoved:(YKMediaEditorCropView *)arg1;
- (void)cropBegin:(YKMediaEditorCropView *)arg1;
@end

