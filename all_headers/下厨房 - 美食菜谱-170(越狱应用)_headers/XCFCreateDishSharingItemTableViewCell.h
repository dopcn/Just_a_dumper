//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UISwitch;

@interface XCFCreateDishSharingItemTableViewCell : UITableViewCell
{
    _Bool _switchOn;
    NSString *_platformName;
    CDUnknownBlockType _sharePlatformStateChangedBlock;
    UIImageView *_sharePlatformImageView;
    UILabel *_sharePlatformNameLabel;
    UISwitch *_sharePlatformSwitch;
}

+ (double)height;
@property(nonatomic) __weak UISwitch *sharePlatformSwitch; // @synthesize sharePlatformSwitch=_sharePlatformSwitch;
@property(nonatomic) __weak UILabel *sharePlatformNameLabel; // @synthesize sharePlatformNameLabel=_sharePlatformNameLabel;
@property(nonatomic) __weak UIImageView *sharePlatformImageView; // @synthesize sharePlatformImageView=_sharePlatformImageView;
@property(copy, nonatomic) CDUnknownBlockType sharePlatformStateChangedBlock; // @synthesize sharePlatformStateChangedBlock=_sharePlatformStateChangedBlock;
@property(nonatomic, getter=isSwitchOn) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
- (void).cxx_destruct;
- (void)switchChanged:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

