//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class KTVSong, UIButton, UILabel;

@interface KTVSingHomeListSingButton : UIControl
{
    _Bool _shouldDownloadBeforeSing;
    _Bool _shouldEmphasize;
    KTVSong *_song;
    UIButton *_singButton;
    UILabel *_progressLabel;
}

@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIButton *singButton; // @synthesize singButton=_singButton;
@property(nonatomic) _Bool shouldEmphasize; // @synthesize shouldEmphasize=_shouldEmphasize;
@property(nonatomic) _Bool shouldDownloadBeforeSing; // @synthesize shouldDownloadBeforeSing=_shouldDownloadBeforeSing;
@property(retain, nonatomic) KTVSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)refreshSongDownloadPrgress:(id)arg1;
- (void)startDownload;
- (void)progressLabelDidClick:(id)arg1;
- (void)singButtonDidClick:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)refresh;
- (void)createAllComponents;
@property(readonly, nonatomic) unsigned long long downloadStatus;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

