//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVKSongCell.h"

@class NSIndexPath;
@protocol KTVKSongReCellDelegate;

@interface KTVKSongReCell : KTVKSongCell
{
    _Bool _expend;
    id <KTVKSongReCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    long long _kind;
}

@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool expend; // @synthesize expend=_expend;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <KTVKSongReCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pressme:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateCellWithData:(id)arg1 hithtLight:(id)arg2 index:(id)arg3;
- (void)setExpendVisible:(_Bool)arg1;
- (void)setExpendBeginState:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 canExpend:(_Bool)arg3;

@end

