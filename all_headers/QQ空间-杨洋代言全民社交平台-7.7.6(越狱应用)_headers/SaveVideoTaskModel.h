//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZTaskModel.h"

#import "NSCoding-Protocol.h"

@class QZVideoPreviewModel;

@interface SaveVideoTaskModel : QZTaskModel <NSCoding>
{
    QZVideoPreviewModel *_videoModel;
}

@property(retain, nonatomic) QZVideoPreviewModel *videoModel; // @synthesize videoModel=_videoModel;
- (void).cxx_destruct;
- (id)taskOptName;
- (id)titleText;
- (id)operText;

@end

