//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OliveappImageForVerifyConf : NSObject
{
    _Bool _shouldFlip;
    int _imgWidth;
    int _imgHeight;
    int _targetWidth;
    int _targetHeight;
    float _horizontalPercent;
    float _verticalOffset;
    int _preRotationDegree;
    int _horizontalMargin;
}

@property _Bool shouldFlip; // @synthesize shouldFlip=_shouldFlip;
@property int horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property int preRotationDegree; // @synthesize preRotationDegree=_preRotationDegree;
@property float verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property float horizontalPercent; // @synthesize horizontalPercent=_horizontalPercent;
@property int targetHeight; // @synthesize targetHeight=_targetHeight;
@property int targetWidth; // @synthesize targetWidth=_targetWidth;
@property int imgHeight; // @synthesize imgHeight=_imgHeight;
@property int imgWidth; // @synthesize imgWidth=_imgWidth;

@end

