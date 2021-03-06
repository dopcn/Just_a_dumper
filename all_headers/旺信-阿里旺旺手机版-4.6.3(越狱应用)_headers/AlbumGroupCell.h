//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AlbumGroupCell : UITableViewCell
{
    UIImageView *_posterView;
    UILabel *_countLabel;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *posterView; // @synthesize posterView=_posterView;
- (void).cxx_destruct;
- (void)updateCellWithPoster:(id)arg1 name:(id)arg2 count:(unsigned long long)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

