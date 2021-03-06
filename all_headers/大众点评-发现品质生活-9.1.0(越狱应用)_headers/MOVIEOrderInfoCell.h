//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NVModelBaseMovieTicketOrder, UIImageView, UILabel, UIView;

@interface MOVIEOrderInfoCell : UITableViewCell
{
    NVModelBaseMovieTicketOrder *_order;
    UIImageView *_movieImageView;
    UIImageView *_endImageView;
    UILabel *_nameLabel;
    UILabel *_versionLabel;
    UILabel *_nameAndVersionLabel;
    UILabel *_showTimeLabel;
    UILabel *_addressLabel;
    UIView *_seatsPanel;
    UIImageView *_resignedImageView;
    UILabel *_resignedTicketTip;
}

@property(retain, nonatomic) UILabel *resignedTicketTip; // @synthesize resignedTicketTip=_resignedTicketTip;
@property(retain, nonatomic) UIImageView *resignedImageView; // @synthesize resignedImageView=_resignedImageView;
@property(retain, nonatomic) UIView *seatsPanel; // @synthesize seatsPanel=_seatsPanel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *showTimeLabel; // @synthesize showTimeLabel=_showTimeLabel;
@property(retain, nonatomic) UILabel *nameAndVersionLabel; // @synthesize nameAndVersionLabel=_nameAndVersionLabel;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *endImageView; // @synthesize endImageView=_endImageView;
@property(retain, nonatomic) UIImageView *movieImageView; // @synthesize movieImageView=_movieImageView;
@property(retain, nonatomic) NVModelBaseMovieTicketOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)viewMovieInfoDetail;
- (void)layoutSubviews;
- (void)showWithOrder:(id)arg1;
- (id)formatMovieName:(id)arg1 movieVersion:(id)arg2;
- (void)updateSeatsUI;
- (void)initialize;
- (id)init;

@end

